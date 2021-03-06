/*
*  Copyright 2018 Michail Vourlakos <mvourlakos@gmail.com>
*
*  This file is part of Latte-Dock
*
*  Latte-Dock is free software; you can redistribute it and/or
*  modify it under the terms of the GNU General Public License as
*  published by the Free Software Foundation; either version 2 of
*  the License, or (at your option) any later version.
*
*  Latte-Dock is distributed in the hope that it will be useful,
*  but WITHOUT ANY WARRANTY; without even the implied warranty of
*  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
*  GNU General Public License for more details.
*
*  You should have received a copy of the GNU General Public License
*  along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

import QtQuick 2.7

import QtQuick.Layouts 1.0

import org.kde.plasma.plasmoid 2.0
import org.kde.plasma.core 2.0 as PlasmaCore
import org.kde.plasma.components 2.0 as PlasmaComponents

import org.kde.latte 0.2 as Latte

Item{
    id: rulerItem

    width: root.isHorizontal ? userMaxLength : thickness
    height: root.isVertical ? userMaxLength : thickness

    opacity: root.editMode ? 1 : 0

    property int rulerAnimationTime: 0.8 * root.animationTime
    property int thicknessMargin: 0

    readonly property bool containsMouse: rulerMouseArea.containsMouse
    readonly property int thickness: theme.defaultFont.pixelSize

    readonly property string tooltip: i18nc("maximum length tooltip, %0% is maximum length percentage","You can use mouse wheel to change maximum length of %0%").arg(plasmoid.configuration.maxLength)

    readonly property int userMaxLength: {
        if (root.isHorizontal) {
            return root.width * (plasmoid.configuration.maxLength/100);
        } else {
            return root.height * (plasmoid.configuration.maxLength/100);
        }
    }

    x: {
        if (root.isHorizontal) {
            return xL;
        } else {
            if (plasmoid.location === PlasmaCore.Types.LeftEdge){
                return settingsRoot.width - thickness - thicknessMargin;
            } else if (plasmoid.location === PlasmaCore.Types.RightEdge){
                return thicknessMargin;
            }
        }
    }

    y: {
        if (root.isVertical) {
            return yL;
        } else {
            if (plasmoid.location === PlasmaCore.Types.BottomEdge){
                return thicknessMargin;
            } else if (plasmoid.location === PlasmaCore.Types.TopEdge){
                return settingsRoot.height - thickness - thicknessMargin;
            }
        }

    }

    property int length: userMaxLength

    property int thickMargin: 3
    property int xL: 0
    property int yL: 0

    Binding{
        target: ruler
        property: "xL"
        value: {
            if (root.isHorizontal) {
                if (plasmoid.configuration.panelPosition === Latte.Types.Justify) {
                    return root.width/2 - rulerItem.length/2 + root.offset;
                } else if (root.panelAlignment === Latte.Types.Left) {
                    return root.offset;
                } else if (root.panelAlignment === Latte.Types.Center) {
                    return root.width/2 - rulerItem.length/2 + root.offset;
                } else if (root.panelAlignment === Latte.Types.Right) {
                    return root.width - rulerItem.length - root.offset;
                }
            } else {
                return ;
            }
        }
    }

    Binding{
        target: ruler
        property: "yL"
        value: {
            if (root.isVertical) {
                if (plasmoid.configuration.panelPosition === Latte.Types.Justify) {
                    return root.height/2 - rulerItem.length/2 + root.offset;
                } else if (root.panelAlignment === Latte.Types.Top) {
                    return root.offset;
                } else if (root.panelAlignment === Latte.Types.Center) {
                    return root.height/2 - rulerItem.length/2 + root.offset;
                } else if (root.panelAlignment === Latte.Types.Bottom) {
                    return root.height - rulerItem.length - root.offset;
                }
            } else {
                return;
            }
        }
    }

    Behavior on width {
        NumberAnimation {
            id: horizontalAnimation
            duration: rulerAnimationTime
            easing.type: Easing.OutCubic
        }
    }

    Behavior on height {
        NumberAnimation {
            id: verticalAnimation
            duration: rulerAnimationTime
            easing.type: Easing.OutCubic
        }
    }

    Behavior on x {
        enabled: root.isHorizontal && !offsetAnimation.running
        NumberAnimation {
            duration: rulerAnimationTime
            easing.type: Easing.OutCubic
        }
    }

    Behavior on y {
        enabled: root.isVertical && !offsetAnimation.running
        NumberAnimation {
            duration: rulerAnimationTime
            easing.type: Easing.OutCubic
        }
    }

    Grid{
        id: rulerGrid
        width: root.isHorizontal ? parent.length : undefined
        height: root.isVertical ? parent.length : undefined

        rows: root.isHorizontal ? 1 : 0
        columns: root.isVertical ? 1 : 0
        spacing: 2

        flow: root.isHorizontal ? GridLayout.TopToBottom : GridLayout.LeftToRight

        x: {
            if (plasmoid.location === PlasmaCore.Types.LeftEdge) {
                return -thickMargin;
            } else if (plasmoid.location === PlasmaCore.Types.RightEdge) {
                return thickMargin;
            } else {
                return 0;
            }
        }

        y: {
            if (plasmoid.location === PlasmaCore.Types.BottomEdge) {
                return thickMargin;
            } else if (plasmoid.location === PlasmaCore.Types.TopEdge) {
                return -thickMargin;
            } else {
                return 0;
            }
        }

        Behavior on width {
            NumberAnimation {
                duration: rulerAnimationTime
                easing.type: Easing.OutCubic
            }
        }

        Behavior on height {
            NumberAnimation {
                duration: rulerAnimationTime
                easing.type: Easing.OutCubic
            }
        }

        property int freeSpace: {
            if (root.isHorizontal) {
                return rulerItem.width - rulerGrid.spacing - 1 //((rulerGrid.children.length-2) * rulerGrid.spacing)
                        - (startLine.width + startArrow.width + labelItem.width + endArrow.width + endArrow.width);
            } else {
                return rulerItem.height - rulerGrid.spacing - 1 //((rulerGrid.children.length-2) * rulerGrid.spacing)
                        - (startLine.height + startArrow.height + labelItem.height + endArrow.height + endArrow.height);
            }
        }

        Rectangle{
            id: startLine
            width: root.isHorizontal ? 2 : theme.defaultFont.pixelSize
            height: root.isVertical ? 2 : theme.defaultFont.pixelSize

            color: settingsRoot.textColor
        }

        Item{
            id: startArrow
            width: root.isHorizontal ? 0.6 * theme.defaultFont.pixelSize : theme.defaultFont.pixelSize
            height: root.isVertical ? 0.6 * theme.defaultFont.pixelSize : theme.defaultFont.pixelSize

            clip:true

            Rectangle{
                anchors.verticalCenter: root.isHorizontal ? parent.verticalCenter : parent.bottom
                anchors.horizontalCenter: root.isHorizontal ? parent.right : parent.horizontalCenter
                width: 0.75*theme.defaultFont.pixelSize
                height: width
                rotation: 45

                color: settingsRoot.textColor
            }
        }

        Item{
            id: startSpacer
            width: root.isHorizontal ? rulerGrid.freeSpace / 2 : theme.defaultFont.pixelSize
            height: root.isVertical ? rulerGrid.freeSpace / 2 : theme.defaultFont.pixelSize

            Rectangle{
                height: root.isHorizontal ? 2 : parent.height
                width: root.isVertical ? 2 : parent.width

                anchors.centerIn: parent

                color: settingsRoot.textColor
            }
        }

        Item {
            id: labelItem
            width: root.isHorizontal ? labelMetricsRec.width : labelMetricsRec.height / 2
            height: root.isVertical ? labelMetricsRec.width : labelMetricsRec.height / 2

            PlasmaComponents.Label{
                id: maxLengthLbl

                anchors.centerIn: parent

                text: i18n("Maximum Length")
                color: settingsRoot.textColor

                transformOrigin: Item.Center

                rotation: {
                    if (root.isHorizontal) {
                        return 0;
                    } else if (plasmoid.location === PlasmaCore.Types.LeftEdge){
                        return 90;
                    } else if (plasmoid.location === PlasmaCore.Types.RightEdge){
                        return -90;
                    }
                }

                Rectangle {
                    id: labelMetricsRec
                    anchors.fill: parent
                    visible: false
                }
            }
        }

        Item{
            id: endSpacer
            width: startSpacer.width
            height: startSpacer.height

            Rectangle{
                height: root.isHorizontal ? 2 : parent.height
                width: root.isVertical ? 2 : parent.width

                anchors.centerIn: parent

                color: settingsRoot.textColor
            }
        }

        Item{
            id: endArrow
            width: root.isHorizontal ? 0.6 * theme.defaultFont.pixelSize : theme.defaultFont.pixelSize
            height: root.isVertical ? 0.6 * theme.defaultFont.pixelSize : theme.defaultFont.pixelSize
            clip:true

            Rectangle{
                anchors.verticalCenter: root.isHorizontal ? parent.verticalCenter : parent.top
                anchors.horizontalCenter: root.isHorizontal ? parent.left : parent.horizontalCenter
                width: 0.75*theme.defaultFont.pixelSize
                height: width
                rotation: 45

                color: settingsRoot.textColor
            }
        }

        Rectangle{
            id: endLine
            width: root.isHorizontal ? 2 : theme.defaultFont.pixelSize
            height: root.isVertical ? 2 : theme.defaultFont.pixelSize

            color: settingsRoot.textColor
        }
    } // end of grid

    RulerMouseArea {
        id: rulerMouseArea
        anchors.fill: parent
    }

    PlasmaComponents.Button {
        anchors.fill: parent
        opacity: 0
        tooltip: rulerItem.tooltip
    }
}

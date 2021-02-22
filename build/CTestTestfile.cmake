# CMake generated Testfile for 
# Source directory: /home/kylin/ukui/ukui-dock/latte-dock-0.9.11
# Build directory: /home/kylin/ukui/ukui-dock/latte-dock-0.9.11/build
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(appstreamtest "/usr/bin/cmake" "-DAPPSTREAMCLI=/usr/bin/appstreamcli" "-DINSTALL_FILES=/home/kylin/ukui/ukui-dock/latte-dock-0.9.11/build/install_manifest.txt" "-P" "/usr/share/ECM/kde-modules/appstreamtest.cmake")
set_tests_properties(appstreamtest PROPERTIES  _BACKTRACE_TRIPLES "/usr/share/ECM/kde-modules/KDECMakeSettings.cmake;163;add_test;/usr/share/ECM/kde-modules/KDECMakeSettings.cmake;181;appstreamtest;/usr/share/ECM/kde-modules/KDECMakeSettings.cmake;0;;/home/kylin/ukui/ukui-dock/latte-dock-0.9.11/CMakeLists.txt;72;include;/home/kylin/ukui/ukui-dock/latte-dock-0.9.11/CMakeLists.txt;0;")
subdirs("declarativeimports")
subdirs("liblatte2")
subdirs("app")
subdirs("containment")
subdirs("plasmoid")
subdirs("shell")

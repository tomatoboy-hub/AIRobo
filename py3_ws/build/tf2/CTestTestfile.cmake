# CMake generated Testfile for 
# Source directory: /workspace/py3_ws/src/third-party/geometry2/tf2
# Build directory: /workspace/py3_ws/build/tf2
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_tf2_gtest_test_cache_unittest "/workspace/py3_ws/build/tf2/catkin_generated/env_cached.sh" "/home/developer/.pyenv/versions/catkin_py3/bin/python3" "/opt/ros/melodic/share/catkin/cmake/test/run_tests.py" "/workspace/py3_ws/build/tf2/test_results/tf2/gtest-test_cache_unittest.xml" "--return-code" "/workspace/py3_ws/devel/.private/tf2/lib/tf2/test_cache_unittest --gtest_output=xml:/workspace/py3_ws/build/tf2/test_results/tf2/gtest-test_cache_unittest.xml")
add_test(_ctest_tf2_gtest_test_static_cache_unittest "/workspace/py3_ws/build/tf2/catkin_generated/env_cached.sh" "/home/developer/.pyenv/versions/catkin_py3/bin/python3" "/opt/ros/melodic/share/catkin/cmake/test/run_tests.py" "/workspace/py3_ws/build/tf2/test_results/tf2/gtest-test_static_cache_unittest.xml" "--return-code" "/workspace/py3_ws/devel/.private/tf2/lib/tf2/test_static_cache_unittest --gtest_output=xml:/workspace/py3_ws/build/tf2/test_results/tf2/gtest-test_static_cache_unittest.xml")
add_test(_ctest_tf2_gtest_test_simple "/workspace/py3_ws/build/tf2/catkin_generated/env_cached.sh" "/home/developer/.pyenv/versions/catkin_py3/bin/python3" "/opt/ros/melodic/share/catkin/cmake/test/run_tests.py" "/workspace/py3_ws/build/tf2/test_results/tf2/gtest-test_simple.xml" "--return-code" "/workspace/py3_ws/devel/.private/tf2/lib/tf2/test_simple --gtest_output=xml:/workspace/py3_ws/build/tf2/test_results/tf2/gtest-test_simple.xml")
subdirs("gtest")

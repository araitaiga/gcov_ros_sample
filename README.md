# ROS(catkin_tools)+gcov sample
### Document  
https://zenn.dev/tiger_zenn/articles/4db887ed0d8b5f

### Usage
1. Build this package
```sh
cd ~/catkin_ws/src/gcov_ros_sample
catkin build --this
catkin test --this
```

2. Execute gcov
```sh
cd ~/catkin_ws/build/gcov_ros_sample/CMakeFiles/gcov_ros_sample_test.dir/hoge_test
gcov gcov_test.cpp.gcda
```

3. (Optional) Execute lcov
```sh
lcov -d . -c --rc lcov_branch_coverage=1 -o LcovData.info && genhtml LcovData.info --branch-coverage -o ./info

# You can check the coverage measurement results by opening info/index.html in your browser.
```

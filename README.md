# pybind11_test

**The extern folder in both add_test and matrix_test needs to delete the original pybind11 folder and perform the operation in extern folder:**

```bash
git clone https://github.com/pybind/pybind11.git
```

**The configuration in the CMakeLists.txt file needs to be updated to reflect the Python path of your own system.**


```
set(PYTHON_EXECUTABLE "/usr/bin/python3")
set(PYTHON_INCLUDE_DIRECTORY "/usr/include/python3.10")
```

Get Python executable path:

```
which python3
```

Get Python include directory path:

```
python3 -c "from sysconfig import get_paths; print(get_paths()['include'])"

```
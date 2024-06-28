# Buildable Linked List
[![License](https://img.shields.io/badge/license-MIT-blue.svg)](LICENSE)

BLL is a linked list library with many build options.

## Features
- Has too many build options
- Supports cpp and c

### Usage
1. Build options
    ```c
    BLL_set_Mark
    // Used for internal debug purposes.
    // You can define it to anything then check like if(BLL_set_Mark == X) { print... }

    BLL_set_AreWeInsideStruct
    // Possible values are 0 or 1. default is 0.
    // Indicates BLL is included inside struct.
    // Value 1 will also set language to cpp.

    BLL_set_Language
    // Possible values are 0 and 1.
    // 0 will make bll cpp, 1 will make bll c.

    BLL_set_prefix
    // Name value is required.
    // Sets prefix of every BLL function/type

    // ...
    ```

### Depends On
* https://github.com/7244/BVEC

## License
This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
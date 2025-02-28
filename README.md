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
    // Possible values are 0 or 1. Default is 0.
    // Indicates BLL is included inside struct.
    // Value 1 will also set language to cpp.

    BLL_set_Language
    // Possible values are 0 and 1.
    // 0 will make bll cpp, 1 will make bll c.

    BLL_set_prefix
    // Name value is required.
    // Sets prefix of every BLL function/type

    BLL_set_declare_NodeReference
    // Possible values are 0 and 1. Default is 1.

    BLL_set_declare_rest
    // Possible values are 0 and 1. Default is 1.
    // Declares everything that's not NodeReference.

    BLL_set_IntegerNR
    // Possible values are 0 and 1. Default is 0.
    // Makes NR a integer instead of struct.

    BLL_set_PreferNextFirst
    // Possible values are 0 and 1. Default is 1.
    // Making it 1 will increase speed of frequent next use. 0 for frequent prev use.

    BLL_set_Recycle
    // Possible values are 0 and 1. Default is 1.
    // Enables recycle

    BLL_set_PadNode
    // Possible values are 0 and 1. Default is 0.

    BLL_set_SafeNext
    // Possible values are >= 0. Default is 0.
    // SafeNext makes you able to go next of node that may be deleted.

    BLL_set_ResizeListAfterClear
    // Possible values are >= 0. Default is 0.
    // Resizes list to minimum size after clear. Good for low memory usage.

    BLL_set_Link
    // Possible values are 0 and 1. Default is 1.
    // Enables links between nodes.

    BLL_set_LinkSentinel
    // Possible values are 0 and 1. Default is 1.
    // Enables sentinel nodes.

    BLL_set_type_node
    // Possible value is integer type. Default is uint32_t
    // Type of node id. How many node you can store is 2 ^ (sizeof(t) * 8)

    BLL_set_NodeSizeType
    // Possible value is integer type. Default is uint32_t

    BLL_set_IsNodeRecycled
    // Possible values are 0 and 1. Default is 0.
    // Enables feature to check if node is recycled or not.

    BLL_set_CPP_nrsic
    // Possible values are 0 and 1. Default is 0.
    // Calls .sic() in NodeReference_t constructor.

    BLL_set_CPP_Node_ConstructDestruct
    // Possible values are 0 and 1. Default is 0.
    // Calls constructor and destructor of node.

    BLL_set_CPP_ConstructDestruct
    // Possible values are 0 and 1. Default is 0.
    // Calls .Open and .Close at constructor and destructor.

    BLL_set_NodeReference_Overload_Declare
    // Expanded inside NodeReference

    BLL_set_Overload_Declare
    // Expanded inside BLL_t

    BLL_set_NodeData
    // Expanded inside NodeData_t
    BLL_set_NodeDataType
    // If set, NodeData_t typedefs itself to it

    BLL_set_CapacityUpdateInfo
    // Expanded at capacity update.

    BLL_set_OnlyNextLink
    // Makes linked list one way. Removes PrevNodeLink

    BLL_set_MultiThread
    // Makes linked list functions thread-safe.
    BLL_set_CountLockFail
    // Counts lock fails if multithread enabled.
    ```

### Depends On
* https://github.com/7244/BVEC

## License
This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

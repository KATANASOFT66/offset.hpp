const offsetsData = {
    version: "version-xxxxxxxx",
    lastUpdated: "2024-01-15",
    
    offsets: {
        EnableLoadModule: "0x0",
        FakeDataModelPointer: "0x0",
        FakeDataModelToDataModel: "0x0",
        GameLoaded: "0x5F8",
        Children: "0x0",
        ChildrenEnd: "0x0",
        Name: "0x0",
        Value: "0x0",
        ClassDescriptor: "0x0",
        ClassDescriptorToClassName: "0x0",
        LocalPlayer: "0x130",
        TaskSchedulerPointer: "0x8057E48",
        TaskSchedulerMaxFPS: "0x1B0",
        LocalScriptByteCode: "0x0",
        ModuleScriptByteCode: "0x0",
        FireMouseClick: "0x1DA2010",
        FireRightMouseClick: "0x1DA21B0",
        FireMouseHoverEnter: "0x1DA35B0",
        FireMouseHoverLeave: "0x1DA3750"
    },

    categories: [
        {
            name: "DataModel",
            icon: "datamodel",
            offsets: [
                { name: "EnableLoadModule", value: "0x0", type: "uintptr_t" },
                { name: "FakeDataModelPointer", value: "0x0", type: "uintptr_t" },
                { name: "FakeDataModelToDataModel", value: "0x0", type: "uintptr_t" },
                { name: "GameLoaded", value: "0x5F8", type: "uintptr_t" }
            ]
        },
        {
            name: "Instance",
            icon: "instance",
            offsets: [
                { name: "Children", value: "0x0", type: "uintptr_t" },
                { name: "ChildrenEnd", value: "0x0", type: "uintptr_t" },
                { name: "Name", value: "0x0", type: "uintptr_t" },
                { name: "Value", value: "0x0", type: "uintptr_t" },
                { name: "ClassDescriptor", value: "0x0", type: "uintptr_t" },
                { name: "ClassDescriptorToClassName", value: "0x0", type: "uintptr_t" },
                { name: "LocalPlayer", value: "0x130", type: "uintptr_t" }
            ]
        },
        {
            name: "Task Scheduler",
            icon: "task",
            offsets: [
                { name: "TaskSchedulerPointer", value: "0x8057E48", type: "uintptr_t" },
                { name: "TaskSchedulerMaxFPS", value: "0x1B0", type: "uintptr_t" }
            ]
        },
        {
            name: "Script",
            icon: "script",
            offsets: [
                { name: "LocalScriptByteCode", value: "0x0", type: "uintptr_t" },
                { name: "ModuleScriptByteCode", value: "0x0", type: "uintptr_t" }
            ]
        },
        {
            name: "Mouse Events",
            icon: "mouse",
            offsets: [
                { name: "FireMouseClick", value: "0x1DA2010", type: "uintptr_t" },
                { name: "FireRightMouseClick", value: "0x1DA21B0", type: "uintptr_t" },
                { name: "FireMouseHoverEnter", value: "0x1DA35B0", type: "uintptr_t" },
                { name: "FireMouseHoverLeave", value: "0x1DA3750", type: "uintptr_t" }
            ]
        }
    ]
};
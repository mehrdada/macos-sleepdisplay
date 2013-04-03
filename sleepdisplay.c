#include <CoreFoundation/CoreFoundation.h>
#include <IOKit/IOKitLib.h>

int main() {
    io_registry_entry_t registryEntry =
        IORegistryEntryFromPath(kIOMasterPortDefault, 
	    "IOService:/IOResources/IODisplayWrangler");
    if(!registryEntry) return 1;
    int err = IORegistryEntrySetCFProperty(registryEntry,
        CFSTR("IORequestIdle"), kCFBooleanTrue);
    IOObjectRelease(registryEntry);
    return err;
}

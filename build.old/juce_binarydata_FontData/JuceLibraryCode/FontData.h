/* =========================================================================================

   This is an auto-generated file: Any edits you make may be overwritten!

*/

#pragma once

namespace FontData
{
    extern const char*   FontAwesome6BrandsRegular400_otf;
    const int            FontAwesome6BrandsRegular400_otfSize = 496340;

    extern const char*   FontAwesome6FreeSolid900_otf;
    const int            FontAwesome6FreeSolid900_otfSize = 973836;

    extern const char*   FontAwesome6FreeRegular400_otf;
    const int            FontAwesome6FreeRegular400_otfSize = 168600;

    // Number of elements in the namedResourceList and originalFileNames arrays.
    const int namedResourceListSize = 3;

    // Points to the start of a list of resource names.
    extern const char* namedResourceList[];

    // Points to the start of a list of resource filenames.
    extern const char* originalFilenames[];

    // If you provide the name of one of the binary resource variables above, this function will
    // return the corresponding data and its size (or a null pointer if the name isn't found).
    const char* getNamedResource (const char* resourceNameUTF8, int& dataSizeInBytes);

    // If you provide the name of one of the binary resource variables above, this function will
    // return the corresponding original, non-mangled filename (or a null pointer if the name isn't found).
    const char* getNamedResourceOriginalFilename (const char* resourceNameUTF8);
}

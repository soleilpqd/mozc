- Checkout project from Github with sub-modules (recursive) or at least with **protobuf** in **third_party** folder.
- We don't need to build mozc (all generated files was built & import into project).
Note that I don't import all source files into framework project. If you get compile error about function symbol not defined,
please search the source file (`.cc`) that contains the function and import into equivalent target of project.  
- We may have to copy **/Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/usr/include/crt_externs.h**
to **/Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneSimulator.sdk/usr/include/crt_externs.h**
to allow to build for device.
- Drag & drop the **Mozc.xcodeproj** into your project. In your project setting **General**, add **Mozc.framework** in **Embedded Binaries**
(XCode will also add it into **Linked Frameworks and Libraries**). In **Build phrases** add **Mozc.framework** into **Target dependencies**.

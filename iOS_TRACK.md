- New folder: **Mozc** contains XCode iOS framework project.
- Build Mozc for MacOSX, then copy files: **character_set.h**, **version_def.h**, **config_file_stream_data.h** from build folder (**out_mac/Release/gen**) into **src/base**. Copy files from **proto_out/protocol** into **protocol**.
- Comment out unavailable source code in **mac_process.mm**, **mac_util.mm**.
# 🎬 Gotflix

**Gotflix** is an open-source media streaming platform with a primary focus on **local content** delivery and **parental control**.  
Designed for families, home servers, and privacy-conscious users, Gotflix gives full control over what is streamed, when, and by whom.

---

## 🌟 Features

- 🎥 **Stream local media** directly from your machine.
- 🔒 **Parental content control** and user-level restrictions.
- 🖥️ **Modern Web UI** with HTML5 video player.
- ⚙️ **Cross-platform backend** powered by C++.
- 🚀 Lightweight and built for performance — no bloat.

---

## 📁 Project Structure
media-app/
├── CMakeLists.txt
├── builds/                    # Compiled binaries
├── include/                   # Public headers
│   ├── core/                  # App entrypoint & high-level logic
│   │   └── MediaPlayer.h
│   ├── playback/              # FFmpeg integration, playback interface
│   │   └── IPlaybackEngine.h
│   ├── streaming/             # HTTP/HLS server module
│   │   └── StreamServer.h
│   └── utils/                 # Logging, config management
│       └── Logger.h
├── src/
│   ├── main.cpp
│   ├── core/
│   │   └── App.cpp
│   ├── playback/
│   │   ├── FFmpegEngine.cpp
│   ├── streaming/
│   │   └── StreamServer.cpp
│   └── utils/
│       └── Logger.cpp
├── external/                  # Third-party libs
└── tests/                     # Unit tests



---

## 🧰 Built With

- **C++17**
- **CMake**
- **[cpp-httplib](https://github.com/yhirose/cpp-httplib)** (embedded web server)
- **HTML5 + CSS3**

---

## 🛠️ Roadmap

- [x] Minimal web-based video player
- [x] Static file server with C++
- [ ] User profiles with PIN-based access
- [ ] Folder-based media scanning
- [ ] Streaming over LAN
- [ ] Settings UI with parental controls

---

## 🧑‍💻 Getting Started

> Clone, build, and run:

```bash
git clone https://github.com/youruser/gotflix.git
cd gotflix
chmod +x build.sh
build.sh

Then open http://localhost:8080 in your browser.

💡 Why Gotflix?
There are many streaming solutions out there.
Gotflix focuses on simplicity, local control, and respecting boundaries — no cloud, no ads, no mystery.

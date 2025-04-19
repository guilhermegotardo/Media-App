#pragma once

#include <string>

class MediaPlayer {
public:
    virtual ~MediaPlayer() = default;

    virtual void MediaLoad(const std::string& path) = 0;
    virtual void MediaPlay() = 0;
    virtual void MediaPause() = 0;
    virtual void MediaStop() = 0;
};
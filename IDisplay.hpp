/*
** EPITECH PROJECT, 2024
** arcade
** File description:
** IDisplayModule
*/

#pragma once

#include <string>
#include <memory>
#include <cstdint>
#include "IDisplay.hpp"

class IDisplayModule {
public:
    virtual ~IDisplayModule() = default;

    enum class Color {
        BLACK,
        REF,
        GREEN,
        YELLOW,
        BLUE,
        MAGENTA,
        CYAN,
        WHITE,
    };

    enum class Button {
        LEFT, // MOVE LEFT
        RIGHT, // MOVE RIGHT
        UP, // MOVE UP
        DOWN, // MOVE DOWN
        X,
        C,
        L, // CHANGE LIBRARY
        G, // CHANGE GAME
        Q, // QUIT PROGRAM
        ESCAPE, // GO TO MENU
        SPACE,
    };

    struct Vector2u {
        std::uint32_t x;
        std::uint32_t y;
    };

    struct Assets {
    };

    struct Sprite {
        Vector2u pixelPosition;
        // Texture texture;
    };

    virtual void init(Assets *assets) = 0;
    virtual void stop() = 0;
    virtual void draw() = 0;
};

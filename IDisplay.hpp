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

namespace arcade {

    enum class Color {
        BLACK,
        RED,
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
        X, // ACTION IN GAME
        C, // ACTION IN GAME
        SPACE, // ACTION IN GAME
        L, // CHANGE LIBRARY
        G, // CHANGE GAME
        Q, // QUIT PROGRAM
        ESCAPE, // GO TO MENU
    };

    struct Vector2u {
        std::uint32_t x;
        std::uint32_t y;
    };

    struct Assets {
    };

    struct Sprite {
        Vector2u pixelPosition;
        // id ?
        // Texture texture;
    };

    virtual void init(Assets *assets) = 0;
    virtual void stop() = 0;
    virtual void draw() = 0;

}

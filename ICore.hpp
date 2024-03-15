/*
** EPITECH PROJECT, 2024
** arcade
** File description:
** ICore
*/

#pragma once

#include "IDisplayModule.hpp"

class ICore {
public:
    virtual ~ICore() = default;

    using Vector2u = IDisplayModule::Vector2u;

    using Color = IDisplayModule::Color;

    // using Texture = IDisplayModule::Texture;

    struct Sprite {
        Vector2u pixelPosition;
        // Texture texture;
    };

};

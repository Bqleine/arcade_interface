/*
** EPITECH PROJECT, 2024
** arcade
** File description:
** IDisplayModule
*/

#pragma once

#include "Types.hpp"

namespace arcade {

    class IDisplay {
        virtual ~IDisplay() = default;
 
        virtual void init(Assets *assets) = 0;
        virtual void stop() = 0;
        virtual void draw(Sprite *sprites) = 0;
    };

}

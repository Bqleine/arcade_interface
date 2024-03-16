/*
** EPITECH PROJECT, 2024
** arcade
** File description:
** IDisplayModule
*/

#pragma once

#include "Types.hpp"
#include "Events.hpp"

namespace arcade::display {

    class IDisplay {
        virtual ~IDisplay() = default;
 
        virtual void init(Assets *assets) = 0;
        virtual void stop() = 0;
        virtual DisplayEvent *draw(Sprite *sprites) = 0;
    };

}

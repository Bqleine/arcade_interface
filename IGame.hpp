/*
** EPITECH PROJECT, 2024
** arcade
** File description:
** IGameModule
*/

#pragma once

#include "Types.hpp"
#include "Events.hpp"

namespace arcade::game {

    class IGame {
    public:
        virtual ~IGame() = default;

        virtual Assets *getAssets() = 0;
        virtual Size getGridSize() = 0;
        virtual GameEvent *update(DisplayEvent *events) = 0;
        virtual Sprite *getSprites() = 0;
    };

}

#pragma once

#include "Types.hpp"
#include "Events.hpp"

namespace arcade::game {
    class IGame {
    public:
        virtual ~IGame() = default;

        virtual std::vector<Assets> getAssets() const = 0;

        virtual Size getGridSize() const = 0;

        virtual std::vector<GameEvent> update(const std::vector<DisplayEvent> &events) = 0;

        virtual std::vector<Sprite> getSprites() const = 0;
    };
}
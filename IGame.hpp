#pragma once

#include "Types.hpp"
#include "Events.hpp"

namespace arcade::games {
    class IGame {
    public:
        virtual ~IGame() = default;

        virtual std::vector<Assets> getAssets() = 0 const;

        virtual Size getGridSize() = 0 const;

        virtual std::vector<GameEvent> update(const std::vector<DisplayEvent> &events) = 0;

        virtual std::vector<Sprite> getSprites() = 0 const;
    };
}
#pragma once

#include "Types.hpp"
#include "Events.hpp"

namespace arcade::game {
    class IGame {
    public:
        virtual ~IGame() = default;

        virtual const Assets &getAssets() const = 0;

        virtual const Metadata &getMetadata() const = 0;

        virtual std::vector<GameEvent> update(const std::vector<DisplayEvent> &events) = 0;

        virtual const std::vector<Sprite> &getSprites() const = 0;

        virtual const std::string &getUsername() const = 0;

        virtual void setUsername(const std::string &username) = 0;
    };
}
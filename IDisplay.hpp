/*
** EPITECH PROJECT, 2024
** bootstrap_arcade
** File description:
** IDisplayModule.hpp
*/

#pragma once
#include "Types.hpp"
#include "Events.hpp"

namespace arcade::display {
    class IDisplay {
    public:
        virtual ~IDisplay() = default;

        virtual void init(const std::vector<Assets> &assets, const Metadata &metadata) = 0;

        virtual void stop() = 0;

        virtual std::vector<DisplayEvent> draw(const std::vector<Sprite> &sprites) = 0;
    };
}

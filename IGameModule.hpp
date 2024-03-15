/*
** EPITECH PROJECT, 2024
** arcade
** File description:
** IGameModule
*/

#pragma once

#include <memory>
#include <string>

// to choose for Assets lists
#include <unordered_map>
#include <vector>

class IGameModule {
public:
    virtual ~IGameModule() = default;

    virtual void getAssets() = 0;
};

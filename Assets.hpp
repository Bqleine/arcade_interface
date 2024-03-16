/*
** EPITECH PROJECT, 2024
** arcade_interface
** File description:
** Game assets
*/

#pragma once

namespace arcade {

    class Asset {
    public:
        int id;                     // Unique identifier for the asset
        const char *data;           // Binary data of the asset
    };

    class Assets {
    public:
        const Asset *fonts;         // Null-terminated array of binary fonts
        const Asset *images;        // Null-terminated array of binary images
        const Asset *sounds;        // Null-terminated array of binary sounds
    };

};

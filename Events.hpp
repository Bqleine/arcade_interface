#pragma once

#include "iostream"

namespace arcade {
    enum class Button {
        LEFT, // MOVE LEFT
        RIGHT, // MOVE RIGHT
        UP, // MOVE UP
        DOWN, // MOVE DOWN
        SPACE, // ACTION IN GAME
        ESCAPE, // GO TO MENU
        ENTER, // SELECTION
        A, B, C, D, E, F, G, H, I, J, K, L, M, N, O, P, Q, R, S, T, U, V, W, X, Y, Z
    };

    class DisplayEvent {
    public:
        Button type;
    };

    enum GameEventType {
        NEXT_GAME,
        NEXT_LIB,
        LOAD_LIB, // USED FOR MENU ONLY
        QUIT_GAME, // SHOULD BE SEND BY THE GAME TO THE CORE TO CLOSE AND DELETE THE GAME
        BACK_TO_MENU, // BACK TO MENU
        EXIT, // EXIT PROGRAM
        RESTART_GAME, // RESTART GAME
        LOAD_ASSETS, // LOAD ASSETS
    };

    class GameEvent {
    public:
        GameEventType type;
        const std::string library;      // type==L : Library to load
    };
}

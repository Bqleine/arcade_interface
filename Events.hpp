#pragma once

#include "iostream"

namespace arcade {
    enum class Button {
        LEFT, // MOVE LEFT
        RIGHT, // MOVE RIGHT
        UP, // MOVE UP
        DOWN, // MOVE DOWN
        X, // ACTION IN GAME
        C, // ACTION IN GAME
        SPACE, // ACTION IN GAME
        Q, // QUIT PROGRAM
        L, // CHANGE GRAPHIC
        G, // CHANGE GAME
        R, // RESTART GAME
        ESCAPE, // GO TO MENU
        ENTER, // SELECTION
        OTHER, // OTHER
    };

    class DisplayEvent {
        public:
            Button type;
    };

    enum GameEventType {
        LOAD_LIB,
        LOAD_GAME,
        QUIT_GAME, // SHOULD BE SEND BY THE GAME TO THE CORE TO CLOSE AND DELETE THE GAME
    };

    class GameEvent {
        public:
            GameEventType type;
            const std::string library;      // type==L : Library to load
    };
}
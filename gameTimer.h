void handleTimer(int tempo, Sprite* mario, bool* deathRise) {
    if (tempo == 120) {
        paraBgMusic();
        playTimeRunningOutSound();
    }
    if (tempo == 115)
        sobeBgMusic(1.3);
    if (tempo <= 0) {
        mario->dead = true;
        *deathRise = true;
        mario->img = al_load_bitmap(URI_MARIO_DEAD);
        paraBgMusic();
        playDeathSound();
    }
}

#ifndef Player_hpp
#define Player_hpp

class Player{
    private:
        /*priv*/
    public:
        void solve();
        /**
         * Retorna a próxima ação do jogador um mapeamento de 0-3, representando ir para esquerda, cima, direita, baixo
         * @return a próxima ação do jogador
         **/
        int nextAction();
};
#endif //Player_hpp
int main() {
    AlberoBin<int> albero;

    albero.inserisciRadice(6);
    cout << "Inserisco la Radice: \n";
    albero.mostraAlbero();

    albero.aggiungiSinistro(0, 17);
    albero.aggiungiDestro(0, 33);
    albero.aggiungiSinistro(1, 46);

    cout << "\nAlbero dopo aver aggiunto i figli:\n";
    albero.mostraAlbero();

    int nodoCorrente = 0;
    int sinistro = albero.indiceSinistro(nodoCorrente);
    int destro = albero.indiceDestro(nodoCorrente);

    cout << "\nNodo " << nodoCorrente << " (" << albero.leggiRadice() << ") ha:" << endl;
    cout << "Figlio sinistro all'indice: " << (sinistro != -1 ? sinistro : -1) << endl;
    cout << "Figlio destro all'indice: " << (destro != -1 ? destro : -1) << endl;

    albero.eliminaNodo(3);
    cout << "\nRimuovo il nodo 3: \n";
    albero.mostraAlbero();

    return 0;
}

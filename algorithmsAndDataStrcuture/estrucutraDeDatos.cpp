// Se importan la librerias
#include <iostream>
using namespace std;

// Se crea una estructura para canciones
struct Song 
{
    string title;
};

// Se crea una clase la cual sera playlist
class playlist
{
private:
  //Dentro de esta clase se crea una estructura la cual sera usada para crear los nodos
    struct Node 
    {
        Song song;
        Node* next;
    };
    Node* currentSong;

public:
    playlist() 
    {
        currentSong = nullptr;
    }


    //Metodo para añadir una canción 
    void addSong(string title) 
    {
        Node* newNode = new Node;
        newNode->song.title = title;
        if (currentSong == nullptr) 
        {
            newNode->next = newNode; // Se genera la primera referencia del nodo
            currentSong = newNode;
        } 
        else 
        {
            newNode->next = currentSong->next;
            currentSong->next = newNode;
        }
    }

    // Metodo para reproducir la cancion actual
    void playCurrentSong() 
    {
        if (currentSong != nullptr) 
        {
            cout << "Reproducciendo...  " << currentSong->song.title<< endl;
        } 
        else 
        {
            cout << "La lista de reproduccion se encuentra vacia." << endl;
        }
    }

    // Metodo para movernos a la siguiente cancion
    void nextSong() 
    {
        if (currentSong != nullptr) {
            currentSong = currentSong->next;
            playCurrentSong();
        } 
        else 
        {
            cout << "La lista de reproduccion se encuentre vacia." << endl;
        }
    }

    // Metodo para movernos a la cancion anterior
    void previousSong() 
    {
        if (currentSong != nullptr) 
        {
            Node* temp = currentSong;
            while (temp->next != currentSong) 
            {
                temp = temp->next;
            }
            currentSong = temp;
            playCurrentSong();
        } 
        else 
        {
            cout << "La lista de reproduccion se encuentra vacia." << endl;
        }
    }

    // Metodo para poder desplegar la lista de reproduccin completa
    void viewPlaylist() 
    {
        if (currentSong != nullptr) 
        {
            Node* temp = currentSong;
            cout << "Playlist:" << endl;
            do 
            {
                cout << temp->song.title <<  endl;
                temp = temp->next;
            }
            while (temp != currentSong);
        } 
        else 
        {
            cout << "La lista de reproduccion se encuentra vacia." << endl;
        }
    }
};

int main() 
{
    playlist pl;
    int choice;
    string title;

    while (true) {
        cout << "Menu:\n";
        cout << "1. Añadir Cancion\n";
        cout << "2. Play\n";
        cout << "3. Siguiente\n";
        cout << "4. anterior\n";
        cout << "5. Display Playlist\n";
        cout << "6. Salir\n";
        cout << "Opcion que desea realizar: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Nombre De la Canción: ";
                cin.ignore();
                getline(cin, title);
                pl.addSong(title);
                break;
            case 2:
                pl.playCurrentSong();
                break;
            case 3:
                pl.nextSong();
                break;
            case 4:
                pl.previousSong();
                break;
            case 5:
                pl.viewPlaylist();
                break;
            case 6:
                cout << "Saliendo... " << endl;
                return 0;
            default:
                cout << "Opcion Invalida" << endl;
        }
    }

    return 0;
}


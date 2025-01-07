#include <iostream>
using namespace std;

class CircularQueue {
private:
    char* queue;
    int front, rear, size;

public:
    CircularQueue(int s) {
        size = s;
        queue = new char[size];
        front = rear = -1;
    }

    ~CircularQueue() {
        delete[] queue;
    }

    bool isFull() {
        return (rear + 1) % size == front;
    }

    bool isEmpty() {
        return front == -1;
    }

    void insert(char item) {
        if (isFull()) {
            cout << "Antrian penuh! Tidak bisa menambah elemen." << endl;
            return;
        }
        if (isEmpty()) {
            front = 0;
        }
        rear = (rear + 1) % size;
        queue[rear] = item;
    }

    char deleteItem() {
        if (isEmpty()) {
            cout << "Antrian kosong! Tidak ada elemen yang bisa dihapus." << endl;
            return '\0';
        }
        char deletedItem = queue[front];
        if (front == rear) {
            front = rear = -1;  // Antrian menjadi kosong
        } else {
            front = (front + 1) % size;
        }
        return deletedItem;
    }

    void printQueue() {
        if (isEmpty()) {
            cout << "Antrian kosong!" << endl;
            return;
        }
        int i = front;
        while (true) {
            cout << queue[i] << " ";
            if (i == rear) break;
            i = (i + 1) % size;
        }
        cout << endl;
    }
};

int main() {
    int size = 5;  // Ukuran antrian
    CircularQueue queue(size);

    while (true) {
        cout << "\nPilihan:" << endl;
        cout << "1. INSERT" << endl;
        cout << "2. DELETE" << endl;
        cout << "3. CETAK ANTRIAN" << endl;
        cout << "4. QUIT" << endl;
        cout << "Masukkan pilihan (1/2/3/4): ";
        int choice;
        cin >> choice;

        switch (choice) {
            case 1: {
                char item;
                cout << "Masukkan karakter yang ingin dimasukkan: ";
                cin >> item;
                queue.insert(item);
                break;
            }
            case 2: {
                char deletedChar = queue.deleteItem();
                if (deletedChar != '\0') {
                    cout << "Karakter '" << deletedChar << "' telah dihapus dari antrian." << endl;
                }
                break;
            }
            case 3:
                cout << "Isi antrian: ";
                queue.printQueue();
                break;
            case 4:
                cout << "Keluar dari program." << endl;
                return 0;
            default:
                cout << "Pilihan tidak valid! Silakan coba lagi." << endl;
                break;
        }
    }

    return 0;
}

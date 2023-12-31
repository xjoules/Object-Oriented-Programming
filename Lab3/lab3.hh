#ifndef LAB3_HH
#define LAB3_HH

class Fifo{
    public:
        Fifo(int);
        ~Fifo();
        void write(char);
        char read();
        int nitems();
        Fifo(const Fifo& original);

    char *array;
    int front;
    int back;
    int count;
    int capacity;
};

#endif

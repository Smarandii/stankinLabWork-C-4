#define editor


class matrix_editor {
    int matrix[10];
public:
    
    void print(int N) {
        int i;
        std::cout << "\n";
        for (i = 0; i < N; i++) {
            std::cout << matrix[i];
            std::cout << " ";
        }
        
    }

    void input(int N) {
        int i;
        std::cout << "INPUT MATRIX:\n";
        for (i = 0; i < N; i++)
            std::cin >> matrix[i];
            
    }

    void move1(int N) {
        int i, tmp = 0, tmp2 = matrix[0];
        bool tmp_exist = false;
        for (i = N - 1; i >= 1; i--) {
             if (!tmp_exist) {
                tmp = matrix[i - 1];
                matrix[i - 1] = matrix[i];
                tmp_exist = true;
             }
             else {
                 tmp2 = matrix[i - 1];
                 matrix[i - 1] = tmp;
                 tmp = tmp2;
             }
        }
        matrix[N - 1] = tmp2;

    }

    void move(int N, int number) 
    {
        while (number) {
            number -= 1;
            move1(N);
        }
    }



};
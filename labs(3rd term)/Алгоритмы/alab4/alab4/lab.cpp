#include "lab.hpp"
void printArray(int* array, int size)
{
    for (size_t i = 0; i < size; i++)
        cout << array[i] << setw(4);
    cout << setw(0) << endl;
}



void createÑhaotically(int* array, int size) {
    for (size_t i = 0; i < size; i++)
        array[i] = rand() % 100;
}
void readÑhaotically(int* array, int size) {
    ifstream file("DataForArray.txt");
    for (size_t i = 0; i < size; i++) {
        file >> array[i];
    }
    file.close();
}
void createAscending(int* array, int size) {
    for (size_t i = 0; i < size; i++)
        array[i] = i;
}
void createDescending(int* array, int size) {
    for (int i = size, j = 0; j < size; i--, j++)
        array[j] = i;
}


void BubbleSort(int* array, int size, int& operationCounter)
{
    operationCounter = 0;
    bool changeFlag = true;
    int i = 1;
    while (changeFlag){
        changeFlag = false;
        for (int j = size - 1; j >= i; j--, operationCounter++)
            if (array[j] < array[j - 1]) {
                swap(array[j], array[j - 1]);
                changeFlag = true;
                operationCounter++;
            }
    
        
        i++;
    }
}

void ShekerSort(int* array, int size, int& operationCounter)
{
    operationCounter = 0;
    int left = 0, right = size - 1; // ëåâàÿ è ïðàâàÿ ãðàíèöû ñîðòèðóåìîé îáëàñòè ìàññèâà
    int flag = 1;  // ôëàã íàëè÷èÿ ïåðåìåùåíèé
    // Âûïîëíåíèå öèêëà ïîêà ëåâàÿ ãðàíèöà íå ñîìêí¸òñÿ ñ ïðàâîé
    // è ïîêà â ìàññèâå èìåþòñÿ ïåðåìåùåíèÿ
    while ((left < right) && flag > 0)
    {
        flag = 0;
        for (int i = left; i < right; i++, operationCounter++)  //äâèãàåìñÿ ñëåâà íàïðàâî
        {
            if (array[i] > array[i + 1]) // åñëè ñëåäóþùèé ýëåìåíò ìåíüøå òåêóùåãî,
            {
                operationCounter++;
                swap(array[i], array[i + 1]);// ìåíÿåì èõ ìåñòàìè
                flag = 1;      // ïåðåìåùåíèÿ â ýòîì öèêëå áûëè
            }
        }
        right--; // ñäâèãàåì ïðàâóþ ãðàíèöó íà ïðåäûäóùèé ýëåìåíò
        for (int i = right; i > left; i--, operationCounter++)  //äâèãàåìñÿ ñïðàâà íàëåâî
        {
            if (array[i - 1] > array[i]) // åñëè ïðåäûäóùèé ýëåìåíò áîëüøå òåêóùåãî,
            {
                operationCounter++;
                swap(array[i], array[i - 1]);// ìåíÿåì èõ ìåñòàìè
                flag = 1;    // ïåðåìåùåíèÿ â ýòîì öèêëå áûëè
            }
        }
        left++; // ñäâèãàåì ëåâóþ ãðàíèöó íà ñëåäóþùèé ýëåìåíò
    }
}

void BucketSort(int* array, int size, int& operationCounter)
{
    operationCounter = 0;
    int minValue = array[0];
    int maxValue = array[0];

    for (int i = 1; i < size; i++, operationCounter++)
    {
        if (array[i] > maxValue) {
            maxValue = array[i];
            operationCounter++;
        }
        if (array[i] < minValue) {
            minValue = array[i];
            operationCounter++;
        }
    }

    int bucketLength = maxValue - minValue + 1;
    vector<int>* bucket = new vector<int>[bucketLength];

    for (int i = 0; i < bucketLength; i++, operationCounter++)
    {
        bucket[i] = vector<int>();
    }

    for (int i = 0; i < size; i++, operationCounter++)
    {
        bucket[array[i] - minValue].push_back(array[i]);
    }

    int k = 0;
    for (int i = 0; i < bucketLength; i++, operationCounter++)
    {
        int bucketSize = bucket[i].size();

        if (bucketSize > 0)
        {
            for (int j = 0; j < bucketSize; j++, operationCounter++)
            {
                array[k] = bucket[i][j];
                k++;
            }
        }
    }

}

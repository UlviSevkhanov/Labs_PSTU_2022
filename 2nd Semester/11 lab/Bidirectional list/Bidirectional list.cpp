#include <iostream>
using namespace std;

struct ListElem
{
    int data;
    ListElem* next;
    ListElem* prev;
};

ListElem* createList(int n)
{
    ListElem* start;
    ListElem* prev, * curr;
    start = new ListElem;
    cin >> start->data;
    start->next = nullptr;
    start->prev = nullptr;
    prev = start;
    for (int i = 0; i < n - 1; i++)
    {
        curr = new ListElem;
        cin >> curr->data;
        curr->next = nullptr;
        curr->prev = prev;
        prev->next = curr;
        prev = curr;
    }
    return start;
}

void insert_element(ListElem* &start, int pos, int k, int size)
{
    ListElem* first = start;
    ListElem* last;
    for (int i = 1; i < pos - 1; i++)
    {
        first = first->next;
    }
    last = first->next;

    ListElem* new_element = new ListElem;
    cout << "Введите элемент: ";
    cin >> new_element->data;
    if (pos == 1)
    {
        new_element->next = first;
        start = new_element;
    }
    else
    {
        new_element->prev = first;
        new_element->next = last;
        last->prev = new_element;
        first->next = new_element;
    }
}
void insert_elements(ListElem* &list, int pos, int k, int size)
{
    for (int i = 0; i < k; i++)
    {
        insert_element(list, pos + i, k, size);
    }
}

void delete_element(ListElem* &start, int pos, int k, int size)
{
    size--;
    ListElem* first = start;
    ListElem* last;
    for (int i = 1; i < pos - 1; i++)
    {
        first = first->next;
    }
    last = first->next->next;
    first->next = last;
    last->prev = first;
}

void delete_elements(ListElem* &start, int pos, int k, int size)
{
    size -= k;
    ListElem* first = start;
    ListElem* last;
    for (int i = 1; i < pos - 1; i++)
    {
        first = first->next;;
    }
    last = first;
    for (int i = 0; i < k + 1; i++)
    {
        last = last->next;
    }
    first->next = last;
    last->prev = first;
}

void search_element(ListElem* start, int element)
{
    ListElem* curr = start;
    int pos = 0;
    while (curr->data != element && curr->next != nullptr)
    {
        curr = curr->next;
        pos++;
    }
    if (curr->data == element)
    {
        cout << "Элемент найден" << endl;
    }
    else
    {
        cout << "Элемент не найден" << endl;
    }
}

void printList(ListElem* start, int n)
{
    ListElem* curr = start;
    for (int i = 0; i < n; i++)
    {
        cout << curr->data << ' ';
        curr = curr->next;
    }
    cout << endl;
}

void deleteList(ListElem* list)
{
    delete list;
}

int main()
{
    setlocale(LC_ALL, "RUS");
    int size, pos, k, element;
    cout << "Введите размер списка: ";
    cin >> size;
    cout << "Введите значения элементов в списке: ";
    ListElem* list = createList(size);
    cout << "Вывод списка" << endl;
    printList(list, size);
    cout << "Введите на какую позицию хотите добавить элемент: ";
    cin >> pos;
    insert_element(list, pos, 1, size);
    cout << "Вывод списка" << endl;
    printList(list, size + 1);
    cout << "Введите на какую позицию хотите добавить элементы и какое количество: ";
    cin >> pos;
    cin >> k;
    insert_elements(list, pos, k, size += k);
    cout << "Вывод списка" << endl;
    printList(list, size += k - 1);
    cout << "Введите на какой позиции хотите удалить элемент: ";
    cin >> pos;
    delete_element(list, pos, 1, size);
    cout << "Вывод списка" << endl;
    printList(list, size - 1);
    cout << "Введите на какой позиции хотите удалить элементы и какое количество: ";
    cin >> pos;
    cin >> k;
    delete_elements(list, pos, k, size -= k);
    cout << "Вывод списка" << endl;
    printList(list, size -= k - 1);
    cout << "Какой элемент вы хотите найти?: ";
    cin >> element;
    search_element(list, element);
    deleteList(list);
    return 0;
}
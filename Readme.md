Лабораторная работа на тему:
============================
Алгебра полиномов
-----------------
В данной лабораторной работе необходимо реализовать:
---
Операции с полиномами:
* Полиномы на списке с поддержкой арифметических операций: сложение, вычитание, умножение, деление, умножение на константу, вычисление в точке.
* Написание парсера, который сможет из пользовательского ввода будет создавать объект класса Полином.
* Специальные операции над переменными: интегрирование дифференцирование.
---
Контейнеры:
* Упорядоченный и неупорядоченный.
* Хэш-таблицы:
    * Метод цепочек.
    * Метод открытой адресации.
* Поисковые деревья:
    * AVL - дерево.
    * Красно-черное дерево.
---
Интерфейс:
  
Взору пользователя предстанет окошко с возможностью ввести иня полинома и само выражение, а также с кнопками перехода на:
* Окно "Операции с полиномами как с алгебраическими выражениями", в котором пользователь вводит выражение вида ({имя полинома}: операция :{имя полинома}).
* Окно "Вычисление в точке, дифференцирование, интегрирование" для выбранного полинома, который пользователь вводил заранее.
* Окно "Возможность удаления полиномов из БД".
* Окно, в котором выводятся существующие полиномы с их именами.
---
План:
=====
1 неделя:
* Организуем структуру хранения полиномов, за основу берем односвязный список.
* Реализация нескольких арифметических операций (сложение, умножение, вычитание).
  
2 неделя:
* Реализация оставшихся арифметических операций (деление, дифференцирование, интегрирование).
* Написание парсера для пользовательского ввода.
* Написание парсера для работы с полиномами как с алгебраическими выражениями.

3 неделя:  
* Написание интерфейса, состоящего из:
    * Окна для ввода имени полинома и самих выражений.
    * Интерактивных кнопок, которые будут переводить пользователя на работу с полиномами как с алгебраическими выражениями.

4 неделя:
* Реализация упорядоченных и неупорядоченных таблиц на основе вектора.
* Реализация хранения полиномов в выше описанных структурах.

5 неделя:
* Реализация хэш-таблиц методом цепочек и методом открытой адресации.
* Реализация хранения полиномов в выше описанных структурах.

6 неделя:
* Реализация поисковых деревьев: AVL-деревья и красно-черные деревья.
* Реализация хранения полиномов в выше описанных структурах.
* Реализация различных интерактивных кнопок для интерфейса.

7 неделя:
* Написание отчёта.
* Правка багов.
* Проверка всех тестов на покрытие кода.

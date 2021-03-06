# Задачи

1. По въведено цяло положително число N програмата да прочита N на брой цели числа, а след това да отпечатва сумата от цифрите им.

    Пример:
    ```
    Вход: 3
    11 255 42
    Изход: 20 // 1 + 1 + 2 + 5 + 5 + 4 + 2
    ```

1. По въведени цели положителни числа a, b (b > a) програмата да изведе
сумата от всички прости числа в интервала [a;b].

    Пример:
    ```
    Вход: 2 10
    Изход: 17 // 2 + 3 + 5 + 7
    ```

1. Да се напише програма, която извежда в нарастващ ред всички трицифрени естествени числа, които не съдържат еднакви цифри.

1. По въведени N на брой числа изведете на екрана сумата:<br>
&nbsp;&nbsp;n<br>
&nbsp;&nbsp;⅀ &nbsp;&nbsp;&nbsp;i<sup>i</sup> = ? <br>
i = 1

1. Да се напише програма, която по подадени M и N да извежда сбора на всички вдигнати битове в битово представяне на числата в интервала  [M, N].

1. Напишете програма, която приема целите числа M и N и изкарва всички тройки линейно независими вектори, чиито координати са цели числа в интервала [M,N].

1. Напишете програма, която по въведено цяло положително число n намира всички n-цифрени числа, които са точни квадрати и се записват само с четни цифри.

1. Да се напише програма, която намира първите 5 “автоморфни” числа. “Автоморфно” число наричаме число, което се съдържа в края на своя квадрат. (25 е автоморфно, защото 25^2 = 625)

1. Напишете програма, която кодира число като последователност от 0 и 1-ци. Нека всяка цифра в числото се представя като последователни единици като броя им е същия като цифрата, а различните цифри се разделят с 0-ли.

    Пример:
    ```
    Вход: 145
    Изход: 101111011111
    ```

1. Напишете програма, която декодира число, което програмата от предишната задача би кодирала.

    Пример:
    ```
    Вход: 101111011111
    Изход: 145
    ```

1. Напишете програма, която по въведено число връща като резултат терм от [последователността на Баум-Суийт](https://en.wikipedia.org/wiki/Baum%E2%80%93Sweet_sequence).

    Условията за редицата са:
    - 1-ца, ако числото няма блок в побитовата си репрезентация с нечетен брой 0-ли
    - 0-ла, в противен случай

    Няколко терма от тази последователност са:<br>
    t1 = 1 (binary of 1 is 1)<br>
    t2 = 0 (binary of 2 is 10)<br>
    t3 = 1 (binary of 3 is 11)<br>
    t4 = 1 (binary of 4 is 100)<br>
    t5 = 0 (binary of 5 is 101)<br>
    t6 = 0 (binary of 6 is 110)<br>
    t7 = 1 (binary of 7 is 111)<br>
    t8 = 0 (binary of 8 is 1000)<br>


1.  Напишете програма, която по въведено N число показва всички “пагубни” число до N. “Пагубно” число наричаме всяко положително число, което броя на единици в побитовата му репрезентация е просто число.

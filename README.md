# Application-11-14
Разработка оконного приложения «Калькулятор»

## Аннотация
**Цель проекта:** Создание и разработка оконного приложения «Калькулятор»

**Средства реализации (Метод, подход и/или алгоритм):** Подходы к разработке оконных приложений на языке программирования C++

**В какой области проект может быть полезен/применим:** Оконное приложение «Калькулятор» может пригодиться в области точных наук, классических вычислений.

**Какую проблему решает проект:** Оконное приложение «Калькулятор» помогает экономить время и экономить время, давать точные расчёты и никогда не ошибаться. 

## Алгоритм работы
```mermaid
flowchart TB
node1([Начало]) -->
node2[/Ввод пользователем первого числа, нажатиями на кнопки/] -->
node3[/Выбор операции, нажатием на одну из кнопок действий/] -->
node4[/Ввод пользователем второго числа, нажатиями на кнопки/] -->
node5[[Вычисление результата]] -->
node6[/Вывод результата/] -->
node7{Выход из программы} 
node7--НЕТ--> node1
node7--ДА--> node9([Конец])

```

## Схема работы
Что это такое?

## Руководство пользователя
Что это такое?

## Тестирование программы и журнал испытаний
| № | Действие пользователя | Ожидаемый результат | Реальный результат | Комментарий |
|:---:|:---:|:---:|:---:|:---:|
| 1 | Открытие приложения | Успешное открытие | Успешное открытие | Никаких ошибок |
| 2 | Ввод второго числа равное нулю при делении | Ошибка Деление на ноль  | Вывод ошибки | Делить на ноль нельзя |

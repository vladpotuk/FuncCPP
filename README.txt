Архітектура:
Data : рівень роботи з даними (API, DB, Servers...)
|-Data-Sources : папка має Remote & Local (для відалених і локальних данних відповідно)
|     |-Remote : папка Remote для відалених даних
|     |    |-Remote_api.h : запит на API
Domain : рівень роботи Бізнес Логікою (Логіка додатку)
Core : рівень всього іншого
|-Library : папка має файл де прописані всі бібліотеки
|    | - Library.h
|-BuildMode : папка має файл де прописані режими зборок та ключі
|    | - BuildMode.h
|-Constants : папка має файл де прописані константні дані
|    | - Constants.h
Main : папка має файли для запуску додатку
| - Main.cpp
| - Application.h
Presentation : рівень роботи з візуалом (Повністю UI частина)
| - Screens : папка має папки з різними екранами
|      | - Home
|      |    | - Home.h
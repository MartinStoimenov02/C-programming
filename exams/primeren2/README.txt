Примерен изпит
Задача 1.
Опишете структура, която да съхранява информация за продуктите в магазин. Съхраняваната информация за всеки един продукт е:
• Име на продукт (низ между 1 и 30 символа)
• ID (код) на продукт (цяло число)
• Срок на годност (низ с формат ГГГГ.ММ.ДД)
• Цена на продукт (реално число)
Създайте масив в който да съхранявате продуктите. Създайте бинарен файл с име “in.bin” На база създадената структура създайте функция, която да добавя нов продукт както в масива, така и в бинарния файл. Не забравяйте да заложите проверки за успешно записване във файла.
Примерен прототип на функцията: void AddNewItem(Item *ip);
Задача 2.
Създайте функция, която приема масив от продукти и дата (низ с формат ГГГГ.ММ.ДД), след което връща масив от продукти, чиито срок на годност изтича на дадената дата. Ако не е открит такъв продукт функцията следва да визуализира съответното съобщение.
Задача 3.
Създайте функция, която прочита данните за продукта от вече създаденият и попълнен бинарен файл “in.bin”, след което ги записва в текстови файл “outTxt” и принтира последователно от двата вида файла в конзолата.
Примерен изход от конзолата:
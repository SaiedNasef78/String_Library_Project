# String_Library_Project(C++)
# String Library (C++) 

A comprehensive C++ library for advanced string manipulation,built with a focus on Object-Oriented Programming (OOP) principles and clean code architecture.
---

## Project Overview
This project is more than just a utility library; it is a practical application of advanced C++ concepts. The primary goal was to bridge the gap between theoretical knowledge and practical experience by integrating complex topics into a single, cohesive tool.
---

## Educational Objectives (From Knowledge to Experience)
- Practical Application: Applying core C++ lessons in a real-world scenario.
- Concept Integration: Successfully merging three major pillars:
    1. Static Members: Understanding shared class logic.
    2. Method Overloading: Creating flexible function signatures.
    3. Properties: Managing internal object state effectively.
- Skill Mastery: Transitioning from "knowing" the syntax to "applying" it to solve problems and build reusable software.
---

## Technical Features
- Dual-Access Architecture: Every function is implemented in two ways:
    1. Static Version: Can be called directly using the class name without instantiation.
    2. Instance (Object) Version: Works directly on the object's internal data.
- Smart Overloading: To ensure efficiency and maintainability, Object methods are overloaded to internally call their Static counterparts, preventing code duplication and ensuring consistency.
---

## Library API Reference
### Case Manipulation
|Function|Description|
| :--- | ---: |
|UpperFirstLetterOfEachWord() | Capitalizes the first letter of every word.|
|LowerFirstLetterOfEachWord() | Converts the first letter of every word to lowercase.|
|UpperAllString() | Converts the entire string to uppercase.|
|LowerAllString() | Converts the entire string to lowercase.|
|InvertLetterCase(char) | Reverses the case of a specific character.|
|InvertAllLettersCase() | Flips the case of every character in the string.|

### Analysis & Counting
|Function|Description|
| :--- | ---: |
|CountWords() | Returns the total number of words.|
|Length() | Returns the total character count.|
|"CountLetters(string, enum)" | "Counts specific types of letters (Capital, Small, etc.)."|
|CountCapitalLetters() | Specifically counts uppercase letters.|
|CountSmallLetters() | Specifically counts lowercase letters.|
|CountVowels() | "Counts vowels (A, E, I, O, U)."|
|"CountSpecificLetter(char, bool)" | Counts occurrences of a specific char (Case-sensitive option).|
|IsVowel(char) | Checks if a character is a vowel.|

### Trimming & Cleaning
|Function|Description|
| :--- | ---: |
|TrimLeft() | Removes leading whitespace.|
|TrimRight() | Removes trailing whitespace.|
|Trim() | Removes both leading and trailing whitespace.|
|RemovePunctuations() | Strips all punctuation marks from the string.|

### Transformation & Joining
|Function|Description|
| :--- | ---: |
|Split(string Delimiter) | Splits the string into a vector<string> based on a separator.|
|JoinString(vector/array) | Concatenates elements of a vector or array into a single string.|
|ReverseWordsInString() | "Reverses the order of words (e.g., ""Hello World"" -> ""World Hello"")."|
|"ReplaceWord(Old, New)" | Replaces specific words within the string.|
---

## Source Code
- [StringLibrary.h](./String%20Library%20Project/clsString.h)
- [main.cpp](./String%20Library%20Project/main.cpp)
--- 

## Developer's Notes
- The essence of this project is the Integration of Lessons. By building this library, I practiced how to design a class that is both a "Utility" (Static) and an "Entity" (Object), ensuring that the internal logic is reused via overloading to maintain a "DRY" (Don't Repeat Yourself) code structure.
---

## 🙏 Acknowledgment
Special thanks and deep appreciation to **Dr. Mohammed Abu Hadhoud**,
for his invaluable teaching, continuous support, and outstanding guidance throughout this project.
This work was inspired and made possible through his educational platform
[ProgrammingAdvices](https://www.programmingadvices.com),
which was the primary source of learning how to build this system step by step.
---

## Translation to Arabic

# String Library (C++)
مكتبة شاملة للتعامل مع النصوص بلغة C++، تم بناؤها لتعزيز مهارات البرمجة الكائنية (OOP) وتحويل المعرفة النظرية إلى خبرة عملية.
---

## عن المشروع
هذا المشروع ليس مجرد مكتبة نصوص، بل هو تطبيق عملي لمفاهيم برمجية متقدمة. الهدف الأساسي هو دمج ما تم تعلمه في دروس الـ Static، الـ Overloading، و الـ Properties في مشروع واحد متكامل.
---

## الأهداف التعليمية (تحويل المعرفة إلى خبرة)
- الممارسة الفعلية: تطبيق الدروس النظرية في بيئة عمل حقيقية.
- كسب الخبرة: دمج مواضيع برمجية مختلفة (Static vs Instance) في كلاس واحد.
- هيكلة الكود: تعلم كيفية بناء دوال Static واستدعائها داخل دوال الـ Object باستخدام الـ Overloading لتقليل تكرار الكود.
---

## المميزات التقنية
- Dual-Mode Functionality: كل دالة متوفرة بنسختين:
    1. Static Version: يمكن استدعاؤها مباشرة من الكلاس دون الحاجة لإنشاء كائن (Object).
    2. Instance Version: تعمل على الكائن الذي تم إنشاؤه وتتعامل مع القيمة المخزنة فيه.
    3. Code Optimization: تم استخدام الـ Overloading بحيث تقوم دوال الكائن باستدعاء دوال الـ Static داخلياً، مما يضمن كوداً نظيفاً وسهل الصيانة.
---


## الكود
- [StringLibrary.h](./String%20Library%20Project/clsString.h)
- [main.cpp](./String%20Library%20Project/main.cpp)
--- 

## ملاحظات المطور
- تم بناء هذه المكتبة لغرض التطوير الذاتي وفهم أعمق للغة C++. تم التركيز على جعل الكود قابلاً لإعادة الاستخدام (Reusable) ومنظماً بشكل يسهل على المبرمجين الآخرين فهمه.
- نصيحة: تحويل المعرفة إلى خبرة يتطلب بناء مثل هذه الأدوات بيدك!
---

## الشكر والتقدير
أتقدم بجزيل الشكر والتقدير إلى الدكتور المخضرم محمد أبو هدهود، على تعليمه القيّم وجهوده الكبيرة في توجيهي خلال تنفيذ هذا المشروع، وعلى ما قدمه من محتوى مميز عبر منصته التعليمية ProgrammingAdvices التي كانت المصدر الأساسي لتعلمي كيفية بناء هذا النظام خطوة بخطوة.
---


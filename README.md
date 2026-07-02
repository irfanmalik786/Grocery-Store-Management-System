<h1 align="center">🛒 Grocery Store Management System</h1>

<p align="center">
  <img src="https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white"/>
  <img src="https://img.shields.io/badge/Status-Completed-success?style=for-the-badge"/>
  <img src="https://img.shields.io/badge/Course-Introduction%20to%20Computing-blue?style=for-the-badge"/>
  <img src="https://img.shields.io/badge/UCP-Fall%202024-red?style=for-the-badge"/>
  <img src="https://img.shields.io/badge/IDE-Visual%20Studio-5C2D91?style=for-the-badge&logo=visualstudio&logoColor=white"/>
</p>

<p align="center">
A simple <b>C++ console-based Grocery Store Management System</b> developed as a semester project for the <b>Introduction to Computing Lab</b> at the <b>University of Central Punjab (UCP)</b>.
</p>

---

# 📌 Overview

The **Grocery Store Management System** is a menu-driven console application developed using **C++**. It simulates the daily operations of a grocery store by allowing users to browse products, purchase items, manage inventory, maintain a shopping cart, and generate the final bill.

This project was built using fundamental programming concepts including arrays, loops, conditional statements, and character arrays without using advanced data structures or external libraries.

---

# ✨ Features

| Feature | Description |
|---------|-------------|
| 🛍️ Product Catalog | Displays products grouped by category |
| 🛒 Shopping Cart | Add multiple products before checkout |
| 📦 Inventory Management | Automatically updates stock after each purchase |
| 💰 Billing System | Calculates total bill at checkout |
| 📋 Cart Summary | Displays all purchased items with subtotals |
| ⚠️ Stock Validation | Prevents invalid purchases and insufficient stock |
| 🚪 Exit Option | Safely exits the application |

---

# 🧠 Concepts Used

<p>

<img src="https://img.shields.io/badge/Arrays-blueviolet?style=for-the-badge"/>
<img src="https://img.shields.io/badge/Loops-blue?style=for-the-badge"/>
<img src="https://img.shields.io/badge/Conditional%20Statements-success?style=for-the-badge"/>
<img src="https://img.shields.io/badge/Character%20Arrays-orange?style=for-the-badge"/>
<img src="https://img.shields.io/badge/Menu%20Driven-red?style=for-the-badge"/>
<img src="https://img.shields.io/badge/Console%20Application-lightgrey?style=for-the-badge"/>

</p>

---

# 🛍️ Product Categories

- 🍎 Fruits
- 🌾 Grains
- 🥛 Dairy
- 🌶️ Masalas
- 🧸 Toys
- 🥤 Soft Drinks
- 🍪 Snacks

---

# 📋 Main Menu

```text
==========================================
        Welcome to Grocery Store
==========================================

1. View Items by Category
2. Buy Items
3. View Cart
4. Checkout
5. Exit
```

---

# 📦 Sample Products

| Product | Category | Price (Rs.) |
|----------|----------|------------:|
| Apples | Fruits | 100 |
| Bananas | Fruits | 50 |
| Rice | Grains | 200 |
| Milk | Dairy | 150 |
| Eggs | Dairy | 12 |
| Turmeric | Masalas | 40 |
| Chili Powder | Masalas | 60 |
| Toy Car | Toys | 500 |
| Doll | Toys | 300 |
| Coke | Soft Drinks | 50 |
| Pepsi | Soft Drinks | 50 |
| Chips | Snacks | 30 |
| Biscuits | Snacks | 20 |
| Chocolate | Snacks | 80 |
| Juice | Snacks | 100 |

---

# 🔧 Program Flow

```text
Start
   │
   ▼
Display Main Menu
   │
   ▼
User Selects Option
   │
   ├── View Products
   ├── Buy Product
   ├── View Cart
   ├── Checkout
   └── Exit
```

---

# ⚙️ Variables Used

| Variable | Description |
|----------|-------------|
| `categories[][]` | Stores product categories |
| `items[][]` | Stores product names |
| `prices[]` | Stores product prices |
| `stock[]` | Stores available stock |
| `cart[]` | Stores purchased quantities |
| `choice` | Stores user's menu choice |
| `totalBill` | Calculates the final bill |

---

# 📁 Project Structure

```text
grocery-store-management-system/
│
├── PROJECT.cpp
├── README.md
├── LICENSE
├── .gitignore
├── Grocery Shop Management System.pdf
├── ITC_lab_final_project_report.pdf
└── screenshots/
```

---

# ▶️ How to Run

## 🖥️ Visual Studio

1. Open **Visual Studio**
2. Create a new **Empty C++ Project**
3. Add `PROJECT.cpp`
4. Build the project
5. Press **Ctrl + F5** to run

---

## 💻 VS Code

```bash
g++ PROJECT.cpp -o GroceryStore
./GroceryStore
```

---

## 🖱️ Dev C++

1. Open `PROJECT.cpp`
2. Compile the project
3. Run the program

---

# 📸 Sample Output

```text
==========================================
=====                                =====
=====    Welcome to Grocery Store    =====
=====                                =====
==========================================

1. View Items by Category
2. Buy Items
3. View Cart
4. Checkout
5. Exit
```

---

# 🚀 Future Improvements

- 🔐 Admin Login System
- 👤 Customer Accounts
- 💾 File Handling
- 🗄️ Database Integration
- 🔍 Product Search
- 📊 Sales Reports
- 🧾 Printable Receipts
- 🖥️ GUI Version
- 🌐 Online Ordering
- 📱 Mobile Application

---

# ⚠️ Limitations

- Console-based application
- Uses static arrays only
- No file handling
- No database connectivity
- Data is not stored permanently
- Single-user system

---

# 📚 Learning Outcomes

Through this project, I learned:

- Working with arrays
- Nested loops
- Conditional statements
- Menu-driven programming
- Inventory management
- Shopping cart implementation
- Billing system development
- Debugging techniques
- Problem-solving using C++

---

# 🛠️ Technologies Used

| Technology | Purpose |
|------------|---------|
| C++ | Programming Language |
| Visual Studio | IDE |
| Console | User Interface |

---

# 🎓 Academic Information

| Field | Details |
|-------|---------|
| **University** | University of Central Punjab (UCP) |
| **Course** | Introduction to Computing Lab |
| **Semester** | Fall 2024 |
| **Project Type** | Semester Project |

---

# 👨‍💻 Developer

**Irfan**  
**L1F24BSCS0580**

---

# 📄 License

This project is licensed under the **MIT License**.

See the **LICENSE** file for more details.

---

<h3 align="center">⭐ If you found this project useful, consider giving it a Star! ⭐</h3>

---

<h2 align="center">👨‍💻 Author</h2>

<p align="center">
<b>Irfan</b><br>
BS Computer Science Student<br>
University of Central Punjab (UCP)<br>
Roll No: <b>L1F24BSCS0580</b>
</p>

# Hospital Management System

## Project Overview

The Hospital Management System is a C++-based console application designed to manage hospital operations efficiently. It handles data for patients (indoor and outdoor), doctors, receptionists, and admins, with features like patient admission, discharge, medicine prescription, and comprehensive data management. The system leverages Object-Oriented Programming (OOP) principles and template programming for modularity, scalability, and maintainability.

## Features

- **Role-Based Access**: Supports Admin, Doctor, and Receptionist roles with tailored functionalities.
- **Patient Management**: Manages indoor and outdoor patients, including admission, discharge, and medicine prescription.
- **Discharge Tracking**: Maintains records of discharged patients in a dedicated `discharge.txt` file.
- **Data Operations**: Supports CRUD (Create, Read, Update, Delete) operations for all entities.
- **File-Based Persistence**: Stores data in text files (`indoor.txt`, `outdoor.txt`, `discharge.txt`, `doctor.txt`, `receptionist.txt`, `admin.txt`).
- **Console Interface**: Interactive UI with a loading animation and ASCII logo.
- **Authentication**: Secure login system for role-based access.

## Technologies Used

- **Language**: C++11
- **Libraries**: `<iostream>`, `<fstream>`, `<string>`, `<windows.h>`, `<conio.h>`
- **Paradigms**: Object-Oriented Programming, Template Programming
- **Storage**: Text file-based data persistence

## OOP Concepts Utilized

- **Classes and Objects**: Encapsulates entities like `person`, `patient`, `Indoor`, `outdoor`, `doctor`, `receptionist`, and `admin`.
- **Inheritance**: Hierarchical structure with `person` as the base class, extended by `patient`, `doctor`, `receptionist`, and `admin`. `patient` is further specialized into `Indoor` and `outdoor`.
- **Polymorphism**: Virtual functions (`writedata`, `readdata`, `searchdata`, `updatedata`, `deletedata`, `precribemedicine`) enable runtime polymorphism.
- **Abstraction**: Abstract base class `person` defines a contract for derived classes.
- **Encapsulation**: Protected data members with public accessor and mutator methods.
- **Operator Overloading**: Custom `>>` and `<<` operators for seamless input/output operations.
- **Templates**: Generic functions (`checklogin`, `update`, `readspecific`, `deleterecord`, `write`, `read`, `pinno`, `updatee`) for type-independent operations.

## Prerequisites

- C++ Compiler (e.g., GCC, MSVC)
- Windows OS (due to `<windows.h>` and `<conio.h>` dependencies)
- Basic knowledge of C++ and OOP

## Installation

1. **Clone the Repository**:

   ```bash
   git clone https://github.com/Rehanulhassan123/Hospital-Management-System.git

   ```

2. **Compile the Code**:
   ```bash
   g++ main.cpp -o hospital_management
   ```
3. **Run the Application**:
   ```bash
   ./hospital_management
   ```

## Usage

1. Launch the application to view the Hospital Management System logo and loading animation.
2. Select a role to log in:
   - **Admin**: Manage data for admins, doctors, and receptionists.
   - **Receptionist**: Handle patient admission, discharge, and data operations for indoor/outdoor patients.
   - **Doctor**: Prescribe medicine and search patient records.
3. Navigate the console menus to perform tasks like:
   - Admitting/discharging patients (data moves to `discharge.txt` upon discharge).
   - Updating, searching, or deleting records.
   - Prescribing medicine for patients.
4. Data is persistently stored in text files:
   - `indoor.txt`: Current indoor patients.
   - `outdoor.txt`: Outdoor patients.
   - `discharge.txt`: Discharged indoor patients.
   - `doctor.txt`: Doctor records.
   - `receptionist.txt`: Receptionist records.
   - `admin.txt`: Admin records.

## File Structure

- `main.cpp`: Core source file with all classes and logic.
- `indoor.txt`: Stores indoor patient data (e.g., PIN, name, DOB, symptoms, ward, bed, admission date, medicine).
- `outdoor.txt`: Stores outdoor patient data (e.g., PIN, name, DOB, symptoms, medicine).
- `discharge.txt`: Stores discharged indoor patient data (includes discharge date).
- `doctor.txt`: Stores doctor data (e.g., PIN, name, specialization, experience).
- `receptionist.txt`: Stores receptionist data (e.g., PIN, name, grade).
- `admin.txt`: Stores admin data (e.g., PIN, name, address).

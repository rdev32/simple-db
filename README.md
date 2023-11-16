# DBMS Project
Welcome to the Database Management System (DBMS) project! This lightweight DBMS is designed to support basic operations such as writing, reading, editing, and deleting data. Additionally, it allows for the creation of tables and subsets of tables (databases). The project aims to be a simplified version of popular systems like SQLite.

## Installation
### Linux
To install the DBMS on a Linux system, follow these steps:

1. Clone the repository: <br>`git clone https://github.com/your-username/dbms-project.git`
2. Navigate to the project directory: <br>`cd dbms-project`
3. Run the installation script: <br>`./install.sh`

## Setup
This database does not suport users so everything is managed as root

## Command Line
### Exporting databases
To export a database, use the following command:
```bash
dbms export -d database_name -f export_file.sql
```
### Loading databases
To load a database from an export file, use the following command:
 ```bash
 dbms load -d database_name -f export_file.sql
 ```

### Databases
#### Create database
```bash
dbms create_database -d new_database
```
#### Update database
```bash
dbms update_database -d existing_database -n new_database_name
```
#### Read database
```bash
dbms read_database -d database_name
```
#### Delete database
```bash
dbms delete_database -d database_name
```

### Tables
#### Create table
```bash
dbms create_table -d database_name -t new_table
```
#### Update table
```bash
dbms update_table -d database_name -t existing_table -n new_table_name
```
#### Read table
```bash
dbms read_table -d database_name -t table_name
```
#### Delete table
```bash
dbms delete_table -d database_name -t table_name
```

## Contribute
We welcome contributions to enhance the functionality and usability of this DBMS. If you'd like to contribute, please follow our Contribution Guidelines.

## About
This project is a simple yet powerful database management system aimed at providing essential features similar to SQLite. It is maintained by [Your Name] and is open for contributions from the community. Feel free to reach out with any questions or feedback!
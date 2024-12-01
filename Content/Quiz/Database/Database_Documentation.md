# Database Implementation Guide ( update on 11/30 )

## Overview
This document outlines the database structure and implementation steps for the textbook question generation system in Knowledge is Power.

## Database Structure

### Tables Overview
The database consists of 2 main tables:
1. `BookChTable` - Stores textbook information.
4. `QuestionTable` - Stores generated questions and answers.

### Table Schemas
```sql
-- Textbooks table
CREATE TABLE "BookChTable" (
	"ID"	INTEGER NOT NULL UNIQUE,
	"Book"	TEXT NOT NULL,
	"Author"	TEXT NOT NULL,
	"Chapter"	INTEGER NOT NULL,
	PRIMARY KEY("ID" AUTOINCREMENT)
);

-- Questions and answers
CREATE TABLE "QuestionTable" (
	"RefID"	INTEGER NOT NULL,
	"Question"	TEXT NOT NULL,
	"CorrectPos"	TEXT NOT NULL DEFAULT 1,
	"A1"	TEXT NOT NULL,
	"A2"	TEXT,
	"A3"	TEXT,
	"A4"	TEXT,
	"Hint"	INTEGER,
	"Explain"	TEXT,
	FOREIGN KEY("RefID") REFERENCES "BookChTable"("ID")
);
```

### Default data to play the game without extracting questions and answers from a book
```sql
-- Textbooks table
INSERT INTO "main"."BookChTable" ("ID", "Book", "Author", "Chapter") VALUES ('1', 'Elementary Math', 'KIP', '1');
INSERT INTO "main"."BookChTable" ("ID", "Book", "Author", "Chapter") VALUES ('2', 'Elementary Biology', 'KIP', '1');
INSERT INTO "main"."BookChTable" ("ID", "Book", "Author", "Chapter") VALUES ('3', 'Python', 'KiP', '10');

-- Questions and Answers table
INSERT INTO "main"."QuestionTable" ("RefID", "Question", "CorrectPos", "A1", "A2", "A3", "A4", "Hint", "Explain") VALUES ('1', '27+175 = ', '3', '183', '190', '202', '192', 'sum integer then decimals', '27 + 175 = 202');
INSERT INTO "main"."QuestionTable" ("RefID", "Question", "CorrectPos", "A1", "A2", "A3", "A4", "Hint", "Explain") VALUES ('1', '23*175 = ', '4', '4000', '6000', '202', '4025', NULL, 'Excellent!');
INSERT INTO "main"."QuestionTable" ("RefID", "Question", "CorrectPos", "A1", "A2", "A3", "A4", "Hint", "Explain") VALUES ('1', '100-57', '2', '34', '43', '50', '33', NULL, NULL);
INSERT INTO "main"."QuestionTable" ("RefID", "Question", "CorrectPos", "A1", "A2", "A3", "A4", "Hint", "Explain") VALUES ('1', 'What is the next prime number after 23?', '1', '29', NULL, NULL, NULL, NULL, NULL);
INSERT INTO "main"."QuestionTable" ("RefID", "Question", "CorrectPos", "A1", "A2", "A3", "A4", "Hint", "Explain") VALUES ('1', 'A cheese cost $1.35. You paid $2. How much change should you get?', '1', '0.65', NULL, NULL, NULL, NULL, NULL);
INSERT INTO "main"."QuestionTable" ("RefID", "Question", "CorrectPos", "A1", "A2", "A3", "A4", "Hint", "Explain") VALUES ('1', 'What is 444 minutes in hours?', '1', '7.4', NULL, NULL, NULL, NULL, NULL);
INSERT INTO "main"."QuestionTable" ("RefID", "Question", "CorrectPos", "A1", "A2", "A3", "A4", "Hint", "Explain") VALUES ('1', 'A rectangular prism has side of 4, 3, and 4. What is its volume?', '1', '48', NULL, NULL, NULL, 'multiply length by width by height', NULL);
INSERT INTO "main"."QuestionTable" ("RefID", "Question", "CorrectPos", "A1", "A2", "A3", "A4", "Hint", "Explain") VALUES ('1', 'A rectangular prism has a base area of 124 cm^2 and height of 12 cm. What is its volume?', '1', '1488', NULL, NULL, NULL, 'Volume = area of the base x height', '124 * 12 = 148');
INSERT INTO "main"."QuestionTable" ("RefID", "Question", "CorrectPos", "A1", "A2", "A3", "A4", "Hint", "Explain") VALUES ('1', 'A car wash washes 92 cars per day. They make $15 per car. How much money will they have made in 4 days?', '3', '5500', '5600', '5520', '5550', 'multiply quantity of cars * cost per car * days', '92 * 15 * 4');
INSERT INTO "main"."QuestionTable" ("RefID", "Question", "CorrectPos", "A1", "A2", "A3", "A4", "Hint", "Explain") VALUES ('1', 'the distance of 2 cities is 3400 miles. If we travel 4/10 of the way, how much we traveled?', '4', '1060', '1300', '1400', '1360', 'divide distance by denominator, multiply by numerator.', NULL);
INSERT INTO "main"."QuestionTable" ("RefID", "Question", "CorrectPos", "A1", "A2", "A3", "A4", "Hint", "Explain") VALUES ('1', 'Bags of parsnips weigh 3.45lbs each. A restaurant orders 4 of these bags and the chef uses 2.35lb of the parsnips. How many lbs are left?', '2', '11', '11.45', '12', '11.30', 'weight of one bag * quantity of bags - usage', '3.45 * 4 - 2.35');
INSERT INTO "main"."QuestionTable" ("RefID", "Question", "CorrectPos", "A1", "A2", "A3", "A4", "Hint", "Explain") VALUES ('1', 'Pasta has 250g of carbohydrates per kilogram. There are 200g pasta in each small packet. How much carbohydrates are in each small packet?', '1', '50g', '75g', '25g', '100g', 'How much grams is 1 kilograms?', NULL);
INSERT INTO "main"."QuestionTable" ("RefID", "Question", "CorrectPos", "A1", "A2", "A3", "A4", "Hint", "Explain") VALUES ('1', 'Four friends ran a total of 26.54 miles.
The friend who ran the farthest ran 12.63 miles.
The friend who ran the shortest ran 3.67 miles.
The other two friends ran the same amount. 
How much did each of the other friends run?', '2', '5', '5.12', '5.5', '5.2', NULL, NULL);
INSERT INTO "main"."QuestionTable" ("RefID", "Question", "CorrectPos", "A1", "A2", "A3", "A4", "Hint", "Explain") VALUES ('1', 'A stack of 40 identical boxed is 8 ft tall.
Mia takes 5 boxes off the top.
How tall is the stack now?', '2', '80 in', '84 in', '85 in', '83 in', NULL, NULL);
INSERT INTO "main"."QuestionTable" ("RefID", "Question", "CorrectPos", "A1", "A2", "A3", "A4", "Hint", "Explain") VALUES ('1', 'The numbers in this sequence increase by the same amount each time.', '3', '30, 60, 70', '53, 65, 07', '35, 56, 77', '2, 4, 8', NULL, NULL);
INSERT INTO "main"."QuestionTable" ("RefID", "Question", "CorrectPos", "A1", "A2", "A3", "A4", "Hint", "Explain") VALUES ('1', '6/5, 3/5, and 3/4. Write these factors in order, starting from the least.', '1', '3/5, 3/4, 6/5', '3/4, 6/5, 3/5', '6/5, 3/5, 3/4', '3/4, 3/5, 6/5', NULL, NULL);
INSERT INTO "main"."QuestionTable" ("RefID", "Question", "CorrectPos", "A1", "A2", "A3", "A4", "Hint", "Explain") VALUES ('2', 'What is viticulture?', '1', 'study of grapes', 'culture of apples', 'control of pests', 'organize books', NULL, NULL);
INSERT INTO "main"."QuestionTable" ("RefID", "Question", "CorrectPos", "A1", "A2", "A3", "A4", "Hint", "Explain") VALUES ('2', 'What gas is given off during Photosynthesis?', '2', 'Nitrogen', 'Oxygen', 'Hydrogen', 'Helium', NULL, NULL);
INSERT INTO "main"."QuestionTable" ("RefID", "Question", "CorrectPos", "A1", "A2", "A3", "A4", "Hint", "Explain") VALUES ('2', 'What percentage of the atmospheric air is oxygen?', '3', 'Less than 10%', 'About 15%', 'About 20%', 'about 90%', NULL, NULL);
INSERT INTO "main"."QuestionTable" ("RefID", "Question", "CorrectPos", "A1", "A2", "A3", "A4", "Hint", "Explain") VALUES ('2', 'Which organ in the human body pumps blood?', '1', 'heart', NULL, NULL, NULL, NULL, NULL);
INSERT INTO "main"."QuestionTable" ("RefID", "Question", "CorrectPos", "A1", "A2", "A3", "A4", "Hint", "Explain") VALUES ('2', 'What is the name of the bone that "protect the brain"?', '1', 'cranium', 'femur', 'tibia', 'hat', NULL, NULL);
INSERT INTO "main"."QuestionTable" ("RefID", "Question", "CorrectPos", "A1", "A2", "A3", "A4", "Hint", "Explain") VALUES ('2', 'The heart is in which cavity?', '2', 'abdomen', 'chest', 'left arm', 'right leg', NULL, NULL);
INSERT INTO "main"."QuestionTable" ("RefID", "Question", "CorrectPos", "A1", "A2", "A3", "A4", "Hint", "Explain") VALUES ('2', 'Where is the mandible found?', '3', 'left hand', 'abdomen', 'jaw', 'right leg', NULL, NULL);
INSERT INTO "main"."QuestionTable" ("RefID", "Question", "CorrectPos", "A1", "A2", "A3", "A4", "Hint", "Explain") VALUES ('2', 'Where is the fibula found?', '4', 'jaw', 'cranium', 'arm', 'leg', NULL, NULL);
INSERT INTO "main"."QuestionTable" ("RefID", "Question", "CorrectPos", "A1", "A2", "A3", "A4", "Hint", "Explain") VALUES ('2', 'What parts of our bodies carry messages from one part of the body to another?', '2', 'bones', 'nerves', 'skin', 'telephone', NULL, NULL);
INSERT INTO "main"."QuestionTable" ("RefID", "Question", "CorrectPos", "A1", "A2", "A3", "A4", "Hint", "Explain") VALUES ('2', 'Plants are called the _______ of nature.', '1', 'lungs', NULL, NULL, NULL, NULL, NULL);
INSERT INTO "main"."QuestionTable" ("RefID", "Question", "CorrectPos", "A1", "A2", "A3", "A4", "Hint", "Explain") VALUES ('2', 'How many bones are there in the adult human body?', '1', '206', NULL, NULL, NULL, NULL, NULL);
INSERT INTO "main"."QuestionTable" ("RefID", "Question", "CorrectPos", "A1", "A2", "A3", "A4", "Hint", "Explain") VALUES ('2', 'How many bones are there in the adult human body?', '3', '135', '604', '206', NULL, NULL, NULL);
INSERT INTO "main"."QuestionTable" ("RefID", "Question", "CorrectPos", "A1", "A2", "A3", "A4", "Hint", "Explain") VALUES ('2', 'What is the first step in the digestion process?', '1', 'ingestion', NULL, '', NULL, NULL, NULL);
INSERT INTO "main"."QuestionTable" ("RefID", "Question", "CorrectPos", "A1", "A2", "A3", "A4", "Hint", "Explain") VALUES ('2', 'Who is credited with the invention of the microscope?', '2', 'Albert Einstein', 'Anton van Leeuwenhoek', 'Lidia Morrison', 'Microsoft', NULL, NULL);
INSERT INTO "main"."QuestionTable" ("RefID", "Question", "CorrectPos", "A1", "A2", "A3", "A4", "Hint", "Explain") VALUES ('2', 'What bone also refers to the beaks of birds?', '4', 'femur', 'tibia', NULL, 'mandible', NULL, NULL);
INSERT INTO "main"."QuestionTable" ("RefID", "Question", "CorrectPos", "A1", "A2", "A3", "A4", "Hint", "Explain") VALUES ('3', 'Question', '1', 'Answer', NULL, NULL, NULL, '', '');
INSERT INTO "main"."QuestionTable" ("RefID", "Question", "CorrectPos", "A1", "A2", "A3", "A4", "Hint", "Explain") VALUES ('3', 'Question', '1', 'Answer', '', '', '', 'Try Answer', 'Good!');
INSERT INTO "main"."QuestionTable" ("RefID", "Question", "CorrectPos", "A1", "A2", "A3", "A4", "Hint", "Explain") VALUES ('3', 'Question with short answer', '1', 'Short Answer', '', '', '', 'Try Short Answer', 'Good!');
INSERT INTO "main"."QuestionTable" ("RefID", "Question", "CorrectPos", "A1", "A2", "A3", "A4", "Hint", "Explain") VALUES ('3', 'Question with multiple choice', '3', 'wrong1', 'wrong2', 'answer', 'wrong3', 'Try answer', 'Nice!');
INSERT INTO "main"."QuestionTable" ("RefID", "Question", "CorrectPos", "A1", "A2", "A3", "A4", "Hint", "Explain") VALUES ('3', 'Question with short answer', '1', 'Short Answer', '', '', '', 'Try Short Answer', 'Good!');
INSERT INTO "main"."QuestionTable" ("RefID", "Question", "CorrectPos", "A1", "A2", "A3", "A4", "Hint", "Explain") VALUES ('3', 'Question with multiple choice', '3', 'wrong1', 'wrong2', 'answer', 'wrong3', 'Try answer', 'Nice!');
```

## Implementation Steps

### 1. Database Creation Process
1. Create a new Widget Blueprint Class.
2. Install SQLite, SQLite Support, and SimpleSQLite plugins and enable them into the project.
3. In the Construction Script:
   - Create database connector.
   - Open the database. Database file must be located inside 'Content' folder
   - Close the database handle and unlocks the file.

### 2. Required Blueprint Functions to Implement

#### Basic Database Operations
1. `CreateSQLiteConnector` - Create a connector which provide connectivity to the database.
2. `Open Database` - Open a SQLite file. Database path should start after '../Content/'. 'Return info' could be used to monitor the response. Target must be the connector.
3. `Execute(With RecordSet)` - Executes the command string on the current opened database. SQLite Resultor will return the SQL query results. Target must be the connector.
4. `GetRecordCount` - Returns a integer with the count of the number os records.
5. `Close Database` - Properly close database connection. Target must be the connector.

### 3. Testing Plan

Create a test level with the following:
1. UI elements to:
   - Add database connection test button.
   - Add sample textbook data.
   - View stored textbook info (delayed).
   - Add sample question and answer data.
   - Test question retrieval (delayed).

2. Test cases to verify:
   - Database creation/connection.
   - Data insertion.
   - Data retrieval (delayed).
   - Foreign key constraints.
   - Error handling

## Common Issues & Solutions

1. **Database Connection Errors**
   - Verify SQLite, SQLite Support, and SimpleSQLite plugin is enabled.
   - Check file permissions.
   - Ensure proper paths are used and if file is stored in correct folder.
   - Ensure that the database is not open by other program like 'DB Browser'.
   - Ensure that the database is being closed every time is being used.

2. **Data Insertion Failures**
   - Verify foreign key constraints
   - Check data types match schema
   - Ensure unique constraints aren't violated
   - Ensure that the database is not open by other program like 'DB Browser'.
   - Ensure that the database is being closed every time is being used.

## Next Steps

1. Implement basic database operations (done)
2. Create test level (done)
3. Add sample data (done)
4. Test all CRUD operations (Create and Read is testing. So far, no need to perform Update and Delete )
5. Integrate with main game flow (Quizzed created)
6. Document any issues or improvements needed (in progress)

## Notes
- Keep database operations asynchronous where possible
- Implement proper error handling
- Document any schema changes
- Regular testing of database operations is crucial
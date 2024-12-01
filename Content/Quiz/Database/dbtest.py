import sqlite3
import random

#Check if connection is open
def chk_conn(conn):
     try:
        conn.cursor()
        return True
     except Exception as ex:
        return False

# Connect to an SQLite database (or create it if it doesn't exist)
conn = sqlite3.connect('kipDB.db')

# Check if connection open
print("Connection status: " + str(chk_conn(conn)))

# Create a cursor object using the cursor() method
cursor = conn.cursor()

#display all books from our database
#result = cursor.execute("SELECT * FROM BookChTable").fetchall()
#print(result)

# Insert a new book
try:
    x = random.randint(1, 100)
    #(NULL, Book, Author, Chapter)
    query = "INSERT INTO BookChTable VALUES (NULL,'Python','KiP', " + str(x) + ")"
    cursor.execute(query)
except (TypeError, ValueError, sqlite3.OperationalError, Exception) as e:
    print(msg=e)

# Save (commit) the changes - use only after INSERT or UPDATE
conn.commit()

# Insert a new question
try:
    x = random.randint(1, 100)
    #structure
    # (BookRef, Question, AnswerPosition, Answer, Wrong1, Wrong2, Wrong3, Hint, Explanation)
    #short answer
    # (10, Question, 1, Answer, '', '', '','','')
    query = "INSERT into QuestionTable VALUES (10, 'Question with short answer', 1, 'Short Answer', '', '', '','Try Short Answer','Good!')"
    cursor.execute(query)
    #multiple choice
    # (10, Question, 2, Wrong1, Answer, Wrong2, Wrong3,'','')
    query = "INSERT into QuestionTable VALUES (10, 'Question with multiple choice', 3, 'wrong1', 'wrong2', 'answer', 'wrong3','Try answer','Nice!')"
    cursor.execute(query)
except (TypeError, ValueError, sqlite3.OperationalError, Exception) as e:
    print(msg=e)

# Save (commit) the changes - use after INSERT or UPDATE
conn.commit()

#close connection
conn.close()

# Check if connection is closed
print("Connection status: " + str(chk_conn(conn)))
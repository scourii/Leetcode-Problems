delete Person1
from Person Person1, Person Person2
where Person1.Email = Person2.Email and Person1.ID > Person2.ID

class Solution(object):
    def countStudents(self, students, sandwiches):
        """
        :type students: List[int]
        :type sandwiches: List[int]
        :rtype: int
        """
        i = 0
        while students:
            if students[0] == sandwiches[0]:
                students.pop(0)
                sandwiches.pop(0)
            else:
                students.append(students.pop(0))
            i += 1
            if i == 1000:
                break
        return len(students)
    
s = Solution()
print(s.countStudents([1,1,0,0], [0,1,0,1]))
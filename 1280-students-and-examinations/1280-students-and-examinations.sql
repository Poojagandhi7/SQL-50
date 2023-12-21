# Write your MySQL query statement below
SELECT s.student_id,s.student_name,su.subject_name,count(e.student_id) as attended_exams
FROM Students as s
cross JOIN Subjects as su
LEFT JOIN Examinations as e ON s.student_id = e.student_id and e.subject_name = su.subject_name
group by s.student_name,s.student_id,su.subject_name
order by s.student_id,su.subject_name;
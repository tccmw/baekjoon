SELECT MEMBER_NAME, REVIEW_TEXT, DATE_FORMAT(REVIEW_DATE, "%Y-%m-%d") AS REVIEW_DATE
FROM MEMBER_PROFILE MP 
INNER JOIN (
    SELECT  *
    FROM REST_REVIEW 
    WHERE MEMBER_ID IN (
                SELECT  MEMBER_ID
                FROM REST_REVIEW 
                GROUP BY MEMBER_ID
                HAVING COUNT(REVIEW_TEXT) = (
                       -- 1번 쿼리
                        SELECT COUNT(*)
                        FROM REST_REVIEW
                        GROUP BY MEMBER_ID
                        ORDER BY COUNT(*) DESC 
                        LIMIT 1
                        )
                    )
                 ) RR
USING(MEMBER_ID)
ORDER BY REVIEW_DATE ASC, REVIEW_TEXT ASC
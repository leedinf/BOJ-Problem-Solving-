-- 코드를 입력하세요
SELECT A.ANIMAL_ID, A.NAME
FROM ANIMAL_OUTS AS A
WHERE NOT EXISTS(
SELECT *
FROM ANIMAL_INS
WHERE ANIMAL_ID = A.ANIMAL_ID
)
#ifndef KEL13_H
#define KEL13_H

/** initFile(char* filename);
 * @param:
 * filename : string of File Path/Name
 */
void initFile(char* filename);

/** processingData(char* data);
 * @param:
 * data : string of unprocessed data
 */
void processingData(char* data);

/** saveData(char* Data);
 * @param:
 * Data : string of data that will be save
 */
void saveData(char* Data);

/** endFileLog();
 * no param, for close fd if opened
 */
void endFileLog();

#endif
